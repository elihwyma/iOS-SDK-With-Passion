/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSString, OTControl, SFSignInAnalytics;

@interface OTConfigurationContext : NSObject

{
    NSString *_context;
    NSString *_dsid;
    NSString *_altDSID;
    SFSignInAnalytics *_analytics;
    OTControl *_otControl;
    id _sbd;
}

@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (retain, nonatomic) SFSignInAnalytics *analytics;
@property (retain) OTControl *otControl;
@property (retain) id sbd;

- (id)makeOTControl:(id *)arg1;

@end
