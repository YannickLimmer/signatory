/* Copyright 2019 Patrick Kidger. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ========================================================================= */
 // Provides the basic signature computations


#ifndef SIGNATORY_SIGNATURE_HPP
#define SIGNATORY_SIGNATURE_HPP

namespace signatory {
    // See signatory.signature for documentation
    std::tuple<torch::Tensor, py::object>
    signature_forward(torch::Tensor path, s_size_type depth, bool stream, bool basepoint, torch::Tensor basepoint_value,
                      bool inverse);

    // See signatory.signature for documentation
    std::tuple<torch::Tensor, torch::Tensor>
    signature_backward(torch::Tensor grad_signature, py::object backwards_info_capsule, bool clone=true);
}  // namespace signatory

#endif //SIGNATORY_SIGNATURE_HPP
