/*
 Image: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
 */

#import <Foundation/NSObject.h>

@protocol FCNewsAppConfigurationManager;

@interface NDAppConfigAnalyticsPayloadAssemblerConfigProvider : NSObject

{
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
}

@property (retain, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager;

- (id)init;
- (void)fetchConfigWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAppConfigurationManager:(id)arg1;

@end
