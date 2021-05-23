/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKPassSearchController.h>

@class CKPassSearchResultsCell;

@interface CKDetailsPassSearchController : CKPassSearchController

{
    CKPassSearchResultsCell *_sizingCell;
}

@property (retain, nonatomic) CKPassSearchResultsCell *sizingCell;

+ (id)sectionIdentifier;

- (id)layoutGroupWithEnvironment:(id)arg1;

@end
