/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSURL.h>

@interface NSURL (CSAdditions)

- (_Bool)cs_addDocumentTracking;
- (_Bool)cs_isInMobileDocuments;

@end
