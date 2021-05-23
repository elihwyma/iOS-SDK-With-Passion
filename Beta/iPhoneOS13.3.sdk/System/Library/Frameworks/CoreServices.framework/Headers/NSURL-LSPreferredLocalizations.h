/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSURL.h>

@class NSArray;

@interface NSURL (LSPreferredLocalizations)

@property (retain, setter=ls_setPreferredLocalizations:) NSArray *ls_preferredLocalizations;
@property (readonly, getter=isiWorkURL) _Bool iWorkURL;

- (_Bool)conformsToOverridePatternWithKey:(id)arg1;
- (id)iWorkApplicationName;
- (id)iWorkDocumentName;
- (id)mapsURL;
- (id)fmfURL;
- (id)fmipURL;
- (id)iTunesStoreURL;
- (id)iCloudEmailPrefsURL;
- (id)photosURL;
- (id)keynoteLiveURL;
- (id)keynoteLiveURL_noFragment;
- (id)iCloudSharingURL;
- (id)iCloudSharingURL_noFragment;

@end
