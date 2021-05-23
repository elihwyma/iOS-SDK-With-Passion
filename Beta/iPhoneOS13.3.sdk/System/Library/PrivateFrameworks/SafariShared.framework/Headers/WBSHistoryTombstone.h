/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface WBSHistoryTombstone : NSObject <Swift>

{
    NSString *_urlString;
    NSData *_urlHash;
    NSData *_urlSalt;
    double _startTime;
    double _endTime;
    long long _generation;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *urlString;
@property (nonatomic, readonly) NSData *urlHash;
@property (nonatomic, readonly) NSData *urlSalt;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) long long generation;
@property (nonatomic, readonly, getter=isSecure) _Bool secure;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)matchesVisitTime:(double)arg1 urlString:(id)arg2;
- (id)initWithURLString:(id)arg1 urlHash:(id)arg2 urlSalt:(id)arg3 startTime:(double)arg4 endTime:(double)arg5 generation:(long long)arg6;
- (id)secureTombstoneWithSalt:(id)arg1;
- (id)initWithSQLiteRow:(id)arg1 crypto:(id)arg2;

@end
