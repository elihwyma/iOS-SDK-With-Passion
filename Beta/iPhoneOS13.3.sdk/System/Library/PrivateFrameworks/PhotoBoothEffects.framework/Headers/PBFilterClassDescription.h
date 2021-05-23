/*
 Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import <NSObject.h>

@class NSArray, NSDictionary;

@interface PBFilterClassDescription : NSObject

{
    NSDictionary *_attributes;
    NSArray *_inputKeys;
}

+ (id)classDescriptionForClass:(Class)arg1;

- (id)attributes;
- (id)inputKeys;
- (id)initWithClass:(Class)arg1;

@end
