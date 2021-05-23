/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString, VKImageSourceKey;

@interface VKLabelMarkerShield : NSObject

{
    VKImageSourceKey *_imageKey;
}

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) CDStruct_83984b6f color;

- (void)dealloc;
- (id)initWithImageKey:(id)arg1;

@end
