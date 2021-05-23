/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class NSString;

@protocol SXCondition <Swift>

@property (nonatomic, readonly) double minViewportWidth;
@property (nonatomic, readonly) double maxViewportWidth;
@property (nonatomic, readonly) double minViewportAspectRatio;
@property (nonatomic, readonly) double maxViewportAspectRatio;
@property (nonatomic, readonly) NSString *minContentSizeCategory;
@property (nonatomic, readonly) NSString *maxContentSizeCategory;
@property (nonatomic, readonly) unsigned long long minColumns;
@property (nonatomic, readonly) unsigned long long maxColumns;
@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) NSString *viewLocation;
@property (nonatomic, readonly) NSString *minSpecVersion;
@property (nonatomic, readonly) NSString *maxSpecVersion;
@property (nonatomic, readonly) long long horizontalSizeClass;
@property (nonatomic, readonly) long long verticalSizeClass;
@property (nonatomic, readonly) NSString *subscriptionStatus;
@property (nonatomic, readonly) unsigned long long testing;
@property (nonatomic, readonly) unsigned long long preferredColorScheme;

@end
