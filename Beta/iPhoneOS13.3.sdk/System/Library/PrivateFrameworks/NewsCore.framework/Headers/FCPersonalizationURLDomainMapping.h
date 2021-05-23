/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface FCPersonalizationURLDomainMapping : NSObject

{
    double _averageSafariVisitsPerDay;
    NSDictionary *_paths;
}

@property (nonatomic) double averageSafariVisitsPerDay;
@property (retain, nonatomic) NSDictionary *paths;

- (id)initWithPBURLMappingDomain:(id)arg1;
- (id)tagsForPath:(id)arg1;

@end
