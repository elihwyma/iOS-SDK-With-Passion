/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface WBSSameDocumentNavigationToHistoryVisitCorrelator : NSObject

{
    NSMutableArray *_visits;
}

- (id)init;
- (void)noteVisit:(id)arg1;
- (id)visitForSameDocumentNavigationToURL:(id)arg1;

@end
