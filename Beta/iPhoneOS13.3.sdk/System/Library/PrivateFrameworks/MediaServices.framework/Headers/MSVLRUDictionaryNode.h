/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MSVLRUDictionaryNode : NSObject

{
    id _key;
    id _object;
    MSVLRUDictionaryNode *_next;
    MSVLRUDictionaryNode *_prev;
}

@property (nonatomic, readonly) id key;
@property (retain, nonatomic) id object;
@property (weak, nonatomic) MSVLRUDictionaryNode *next;
@property (weak, nonatomic) MSVLRUDictionaryNode *prev;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(id)arg1 object:(id)arg2;

@end
