/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCDSummary : NSObject

{
    NSString *mTitle;
    NSString *mAuthor;
    NSString *mKeywords;
    NSString *mComments;
    NSString *mHyperlinkBase;
    NSString *_subject;
    NSString *_company;
}

@property (retain) NSString *subject;
@property (retain) NSString *company;

- (id)title;
- (void)setTitle:(id)arg1;
- (id)keywords;
- (void)setKeywords:(id)arg1;
- (id)author;
- (void)setAuthor:(id)arg1;
- (id)comments;
- (void)setComments:(id)arg1;
- (id)hyperlinkBase;
- (void)setHyperlinkBase:(id)arg1;

@end
