/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDictionary, NTPBURLMapping;

@interface FCPersonalizationURLMapping : NSObject <Swift>

{
    NTPBURLMapping *_pbURLMapping;
    NSDictionary *_urlMappingByDomain;
}

@property (retain, nonatomic) NSDictionary *urlMappingByDomain;
@property (nonatomic, readonly) unsigned long long count;

+ (_Bool)supportsSecureCoding;
+ (id)domainForURL:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonEncodableObject;
- (id)initWithPBURLMapping:(id)arg1;
- (id)tagScoresForURL:(id)arg1;
- (id)popularityForURL:(id)arg1;

@end
