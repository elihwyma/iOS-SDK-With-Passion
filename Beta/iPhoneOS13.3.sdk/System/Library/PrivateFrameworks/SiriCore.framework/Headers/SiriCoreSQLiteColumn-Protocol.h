/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <SiriCore/Swift-Protocol.h>

@class NSString;

@protocol SiriCoreSQLiteValue;

@protocol SiriCoreSQLiteColumn <Swift>

@property (nonatomic, readonly) long long identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) _Bool isPrimaryKey;
@property (nonatomic, readonly) _Bool isNotNull;
@property (copy, nonatomic, readonly) id <SiriCoreSQLiteValue> defaultValue;

@end
