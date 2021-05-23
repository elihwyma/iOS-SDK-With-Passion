/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBFMagnifyMode : NSObject

{
    float _zoomFactor;
    NSString *_name;
    struct CGSize _size;
}

@property (nonatomic) struct CGSize size;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) float zoomFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)currentMagnifyMode;
+ (id)magnifyModeWithSize:(struct CGSize)arg1 name:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
