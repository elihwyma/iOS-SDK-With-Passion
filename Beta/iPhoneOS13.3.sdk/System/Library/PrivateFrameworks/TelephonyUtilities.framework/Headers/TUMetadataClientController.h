/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class TUMetadataCache;

@interface TUMetadataClientController : NSObject

{
    TUMetadataCache *_metadataCache;
}

@property (retain, nonatomic) TUMetadataCache *metadataCache;

+ (id)sharedInstance;

- (id)init;
- (void)updateMetadataForRecentCalls:(id)arg1;
- (id)_metadataDestinationIdForSearchItem:(id)arg1;
- (id)suggestionForDestinationID:(id)arg1;
- (id)locationForDestinationID:(id)arg1;
- (id)directoryLabelForDestinationID:(id)arg1;
- (void)updateMetadataForDestinationID:(id)arg1;
- (id)suggestionForSearchItem:(id)arg1;
- (id)locationForSearchItem:(id)arg1;
- (id)directoryLabelForSearchItem:(id)arg1;
- (void)updateMetadataForCall:(id)arg1;

@end
