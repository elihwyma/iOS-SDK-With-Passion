/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@interface CPLRUDictionaryNode : NSObject

{
    id _key;
    id _object;
    CPLRUDictionaryNode *next;
    CPLRUDictionaryNode *prev;
}

@property (nonatomic, readonly) id key;
@property (retain, nonatomic) id object;

- (void)dealloc;
- (id)initWithKey:(id)arg1 object:(id)arg2;

@end
