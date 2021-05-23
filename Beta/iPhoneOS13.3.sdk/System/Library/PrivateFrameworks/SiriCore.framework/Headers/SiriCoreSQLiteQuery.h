/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SiriCoreSQLiteStatement;

@protocol SiriCoreSQLiteRecordBuilder;

@interface SiriCoreSQLiteQuery : NSObject

{
    NSString *_string;
    SiriCoreSQLiteStatement *_statement;
    NSArray *_parameters;
    id <SiriCoreSQLiteRecordBuilder> _recordBuilder;
    unsigned long long _options;
}

@property (copy, nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) SiriCoreSQLiteStatement *statement;
@property (copy, nonatomic, readonly) NSArray *parameters;
@property (nonatomic, readonly) id <SiriCoreSQLiteRecordBuilder> recordBuilder;
@property (nonatomic, readonly) unsigned long long options;

- (id)description;
- (id)initWithString:(id)arg1 statement:(id)arg2 parameters:(id)arg3 recordBuilder:(id)arg4 options:(unsigned long long)arg5;

@end
