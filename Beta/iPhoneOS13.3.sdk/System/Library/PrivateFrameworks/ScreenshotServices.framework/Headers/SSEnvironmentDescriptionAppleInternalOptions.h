/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class NSString, RCPMovie, SSUIRunPPTServiceRequest;

@interface SSEnvironmentDescriptionAppleInternalOptions : NSObject

{
    SSUIRunPPTServiceRequest *_runPPTServiceRequest;
    RCPMovie *_recapMovie;
}

@property (retain, nonatomic) SSUIRunPPTServiceRequest *runPPTServiceRequest;
@property (retain, nonatomic) RCPMovie *recapMovie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
