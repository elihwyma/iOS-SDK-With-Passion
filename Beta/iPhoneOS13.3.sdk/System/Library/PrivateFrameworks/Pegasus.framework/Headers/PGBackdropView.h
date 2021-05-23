/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@class NSString;

__attribute__((visibility("hidden")))
@interface PGBackdropView

@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) double gaussianBlurRadius;
@property (nonatomic) double saturationAmount;
@property (nonatomic) double scale;

+ (Class)layerClass;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
