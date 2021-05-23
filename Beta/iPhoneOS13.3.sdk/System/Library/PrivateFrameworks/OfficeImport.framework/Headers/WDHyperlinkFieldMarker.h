/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/WDFieldMarker.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDHyperlinkFieldMarker : WDFieldMarker

{
    NSString *mLink;
    NSString *mFragment;
    unsigned int mInternalLink:1;
}

@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *fragment;
@property (nonatomic) _Bool internalLink;

- (id)description;
- (int)runType;

@end
