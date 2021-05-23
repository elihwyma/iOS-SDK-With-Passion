/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDiagnosticRequestAlertItem.h>

@class NSSet, NSString;

@interface SBInsecureDrawingAlertItem : SBDiagnosticRequestAlertItem

{
    NSString *_processName;
    NSSet *_layerNames;
}

@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) NSSet *layerNames;

- (id)title;
- (id)message;
- (id)_buildVersion;
- (id)radarDescription;
- (_Bool)shouldShowInLockScreen;
- (_Bool)ignoreIfAlreadyDisplaying;
- (id)radarTitle;
- (long long)radarClassification;
- (long long)radarReproducibility;

@end
