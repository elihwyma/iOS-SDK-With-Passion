/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary;

@interface FCLocalAreasMapping : NSObject <Swift>

{
    NSData *_data;
    NSDictionary *_regionMap;
    NSArray *_areas;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *regionMap;
@property (retain, nonatomic) NSArray *areas;
@property (nonatomic, readonly) unsigned long long count;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)regionsForLocation:(id)arg1;

@end
