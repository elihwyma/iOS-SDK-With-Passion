/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SiriCoreSQLiteValue;

@interface _SiriCoreSQLiteColumnInfo : NSObject

{
    _Bool _isPrimaryKey;
    _Bool _isNotNull;
    long long _identifier;
    NSString *_name;
    NSString *_type;
    id <SiriCoreSQLiteValue> _defaultValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) _Bool isPrimaryKey;
@property (nonatomic, readonly) _Bool isNotNull;
@property (copy, nonatomic, readonly) id <SiriCoreSQLiteValue> defaultValue;

- (id)initWithIdentifier:(long long)arg1 name:(id)arg2 type:(id)arg3 isPrimaryKey:(_Bool)arg4 isNotNull:(_Bool)arg5 defaultValue:(id)arg6;

@end
