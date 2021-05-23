/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@protocol TPSAnalyticsDataProviderDataSource;

@interface TPSAnalyticsDataProvider : NSObject

{
    id <TPSAnalyticsDataProviderDataSource> _dataSource;
}

@property (weak, nonatomic) id <TPSAnalyticsDataProviderDataSource> dataSource;

- (id)initWithDataSource:(id)arg1;
- (id)contextForIdentifier:(id)arg1;
- (id)bundleIDForIdentifier:(id)arg1;
- (id)experimentID;
- (id)experimentCampID;
- (id)displayTypeForIdentifier:(id)arg1;
- (id)lastDisplayedDateForIdentifier:(id)arg1;
- (unsigned long long)hintDisplayedCountForIdentifier:(id)arg1;
- (id)deliveryInfoForIdentifier:(id)arg1;
- (id)experiment;
- (id)deliveryInfoVersion;
- (id)experimentCampIDStringForCamp:(long long)arg1;
- (id)tipStatusForIdentifier:(id)arg1;

@end
