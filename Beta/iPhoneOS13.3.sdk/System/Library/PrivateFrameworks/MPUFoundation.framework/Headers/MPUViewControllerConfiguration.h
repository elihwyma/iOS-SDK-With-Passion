/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class MPUDataSourceConfiguration;

@interface MPUViewControllerConfiguration : NSObject

{
    _Bool _wantsModalPresentation;
    _Bool _wantsNavigationController;
    Class _cellConfigurationClass;
    Class _viewControllerClass;
    MPUDataSourceConfiguration *_dataSourceConfiguration;
    CDUnknownBlockType _configurationBlock;
    Class _navigationControllerClass;
}

@property (nonatomic, readonly) Class cellConfigurationClass;
@property (nonatomic, readonly) Class viewControllerClass;
@property (retain, nonatomic) MPUDataSourceConfiguration *dataSourceConfiguration;
@property (copy, nonatomic) CDUnknownBlockType configurationBlock;
@property (nonatomic) _Bool wantsModalPresentation;
@property (nonatomic) _Bool wantsNavigationController;
@property (retain, nonatomic) Class navigationControllerClass;

+ (id)configurationWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2;
+ (id)configurationWithViewControllerClass:(Class)arg1;

- (id)initWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2;
- (id)initWithViewControllerClass:(Class)arg1;

@end
