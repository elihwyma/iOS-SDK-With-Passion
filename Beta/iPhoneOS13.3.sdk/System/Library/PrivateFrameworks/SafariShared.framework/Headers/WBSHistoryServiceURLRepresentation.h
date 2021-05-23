/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSData, NSString;

@interface WBSHistoryServiceURLRepresentation : NSObject <Swift>

{
    NSString *_urlString;
    NSData *_urlHash;
    NSData *_urlSalt;
}

@property (copy, nonatomic, readonly) NSString *urlString;
@property (copy, nonatomic, readonly) NSData *urlHash;
@property (copy, nonatomic, readonly) NSData *urlSalt;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (id)initWithURLHash:(id)arg1 salt:(id)arg2;

@end
