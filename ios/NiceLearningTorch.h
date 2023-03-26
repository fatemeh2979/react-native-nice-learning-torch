#ifdef __cplusplus
#import "react-native-nice-learning-torch.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNNiceLearningTorchSpec.h"

@interface NiceLearningTorch : NSObject <NativeNiceLearningTorchSpec>
#else
#import <React/RCTBridgeModule.h>

@interface NiceLearningTorch : NSObject <RCTBridgeModule>
#endif

@end
