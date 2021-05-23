/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

#import <SiriCore/Swift-Protocol.h>

@class NSArray;

@interface SiriCoreSQLiteQueryOrder : NSObject <Swift>

{
    long long _mode;
    NSArray *_columnNames;
}

@property (nonatomic, readonly) long long mode;
@property (copy, nonatomic, readonly) NSArray *columnNames;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColumnNames:(id)arg1 mode:(long long)arg2;

@end
