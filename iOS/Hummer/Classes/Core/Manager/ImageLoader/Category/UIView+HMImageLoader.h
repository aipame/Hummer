//
//  UIView+HMImageLoader.h
//  Hummer
//
//  Created by didi on 2020/12/3.
//

#import <UIKit/UIKit.h>
#import "HMImageLoader.h"
NS_ASSUME_NONNULL_BEGIN

@interface UIView (HMImageLoader)

- (void)hm_internalSetImageWithURL:(id<HMURLConvertible>)source
                  inJSBundleSource:(nullable id<HMURLConvertible>)bundleSource
                           context:(nullable HMImageLoaderContext *)context
                        completion:(nullable HMImageCompletionBlock)completionBlock;
@end

NS_ASSUME_NONNULL_END
