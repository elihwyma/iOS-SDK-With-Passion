/*
 Image: /System/Library/PrivateFrameworks/IDSKVStore.framework/IDSKVStore
 */

#import <Foundation/NSObject.h>

@interface IDSKVDeleteContext : NSObject

{
    BOOL _valueType;
    unsigned long long _rowIDCutoff;
}

@property (nonatomic) unsigned long long rowIDCutoff;
@property (nonatomic) BOOL valueType;

@end
