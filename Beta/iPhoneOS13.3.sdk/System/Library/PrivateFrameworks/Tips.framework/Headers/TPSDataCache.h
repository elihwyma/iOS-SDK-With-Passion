/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface TPSDataCache : NSObject

{
    unsigned long long _cacheType;
    long long _maxAge;
    unsigned long long _fileSize;
    NSString *_identifier;
    NSString *_lastModified;
    NSString *_languageCode;
    NSDate *_updatedDate;
}

@property (nonatomic, readonly) _Bool expired;
@property (nonatomic) unsigned long long cacheType;
@property (nonatomic) long long maxAge;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *lastModified;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSDate *updatedDate;

+ (_Bool)supportsSecureCoding;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
