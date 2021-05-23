/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImage.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _UIMappedBitmapImage : UIImage

{
    NSData *_data;
}

@property (retain, nonatomic) NSData *data;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_configureImage:(id)arg1 assumePreconfigured:(_Bool)arg2;
- (void)_preheatBitmapData;

@end
