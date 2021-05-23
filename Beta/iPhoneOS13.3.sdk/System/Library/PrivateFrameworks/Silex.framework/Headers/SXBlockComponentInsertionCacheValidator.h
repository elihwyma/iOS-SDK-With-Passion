/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXBlockComponentInsertionCacheValidator : NSObject

{
    CDUnknownBlockType _block;
}

@property (nonatomic, readonly) CDUnknownBlockType block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)validatorWithBlock:(CDUnknownBlockType)arg1;

- (_Bool)validateCache:(id)arg1 DOMObjectProvider:(id)arg2;

@end
