/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@interface RKMontrealModel : NSObject

{
    void *_model;
}

@property (nonatomic, readonly) void *model;

+ (id)pathForLanguage:(id)arg1;
+ (id)modelForLanguage:(id)arg1;

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)reset;

@end
