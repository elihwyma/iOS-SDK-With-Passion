/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _SFActivityItemCustomizationDelegate;

@interface _SFActivityItemCustomizationController : NSObject

{
    _Bool _contentTypeAllowedMap[5];
    id <_SFActivityItemCustomizationDelegate> _delegate;
    long long _selectedContentType;
}

@property (weak, nonatomic) id <_SFActivityItemCustomizationDelegate> delegate;
@property (nonatomic, readonly) long long selectedContentType;
@property (nonatomic, readonly) _Bool canShareAsLink;
@property (nonatomic, readonly) _Bool canPrint;
@property (nonatomic, readonly) _Bool canShareAsDownload;
@property (nonatomic, readonly) _Bool canShareAsWebArchive;
@property (nonatomic, readonly) _Bool canShareAsStandaloneImage;
@property (nonatomic, readonly) _Bool canShareAsPDF;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)_selectedIndex;
- (id)_customizationGroupsForActivityViewController:(id)arg1;
- (id)_allowedContentTypes;
- (long long)_contentTypeForAllowedContentAtIndex:(long long)arg1;
- (void)_customizationsDidChange;
- (void)_ensureSelectedContentTypeIsAllowed;

@end
