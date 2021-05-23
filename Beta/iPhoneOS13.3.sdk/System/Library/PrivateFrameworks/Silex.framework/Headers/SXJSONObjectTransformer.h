/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXJSONObjectTransformer : NSObject

{
    NSString *_key;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic, readonly) NSString *key;
@property (copy, nonatomic, readonly) CDUnknownBlockType block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)concatenatingTransformerWithKey:(id)arg1;
+ (id)transformerWithKey:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)mergingTransformerWithKey:(id)arg1;

- (id)transformKey:(id)arg1;
- (id)transformObject:(id)arg1 otherObject:(id)arg2;

@end
