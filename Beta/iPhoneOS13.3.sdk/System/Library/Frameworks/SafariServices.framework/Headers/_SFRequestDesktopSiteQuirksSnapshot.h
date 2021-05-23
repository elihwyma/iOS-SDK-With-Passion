/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface _SFRequestDesktopSiteQuirksSnapshot : NSObject

{
    NSDictionary *_requestDesktopSiteQuirks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPlistData:(id)arg1 error:(id *)arg2;
- (id)plistDataWithFormat:(unsigned long long)arg1;
- (id)requestDesktopSiteSettingForDomain:(id)arg1;
- (id)allRequestDesktopSiteQuirks;

@end
