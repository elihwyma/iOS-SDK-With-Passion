/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface _ATXAppInfo : NSObject

{
    _Bool _isExtension;
    _Bool _isEnterpriseApp;
    NSString *_bundleId;
    NSDate *_installDate;
    NSDate *_lastLaunch;
    NSDate *_lastSpotlightLaunch;
    NSNumber *_averageSecondsBetweenLaunches;
    NSNumber *_medianSecondsBetweenLaunches;
    NSNumber *_genreId;
    NSArray *_subGenreIds;
    NSNumber *_app2VecCluster;
}

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) _Bool isExtension;
@property (nonatomic) _Bool isEnterpriseApp;
@property (copy, nonatomic) NSDate *installDate;
@property (copy, nonatomic) NSDate *lastLaunch;
@property (copy, nonatomic) NSDate *lastSpotlightLaunch;
@property (copy, nonatomic) NSNumber *averageSecondsBetweenLaunches;
@property (copy, nonatomic) NSNumber *medianSecondsBetweenLaunches;
@property (copy, nonatomic) NSNumber *genreId;
@property (copy, nonatomic) NSArray *subGenreIds;
@property (copy, nonatomic) NSNumber *app2VecCluster;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleId:(id)arg1 isExtension:(_Bool)arg2 isEnterpriseApp:(_Bool)arg3 installDate:(id)arg4 lastLaunch:(id)arg5 lastSpotlightLaunch:(id)arg6 averageSecondsBetweenLaunches:(id)arg7 medianSecondsBetweenLaunches:(id)arg8 genreId:(id)arg9 subGenreIds:(id)arg10 app2VecCluster:(id)arg11;

@end
