/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@interface TILRUDictionaryNode : NSObject

{
    id _key;
    id _object;
    TILRUDictionaryNode *next;
    TILRUDictionaryNode *prev;
}

@property (nonatomic, readonly) id key;
@property (retain, nonatomic) id object;

- (id)initWithKey:(id)arg1 object:(id)arg2;

@end
