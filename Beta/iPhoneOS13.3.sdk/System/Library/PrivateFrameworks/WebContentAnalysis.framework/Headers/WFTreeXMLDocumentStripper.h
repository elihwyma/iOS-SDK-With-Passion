/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WFTreeXMLDocumentStripper : NSObject

{
    struct _xmlDoc *xmlDocument;
    NSString *pageTitle;
    NSMutableDictionary *metaTagsLabeled;
    NSMutableArray *metaTagsUnlabeled;
    NSMutableArray *scriptBlocks;
    NSMutableArray *images;
    NSString *pageContent;
    NSMutableArray *links;
    _Bool hasFrameset;
    _Bool hasShortRefresh;
}

+ (id)treeStripperWithXMLDocument:(struct _xmlDoc *)arg1;

- (void)dealloc;
- (id)description;
- (id)images;
- (id)URLString;
- (id)links;
- (id)pageTitle;
- (void)setPageTitle:(id)arg1;
- (id)pageContent;
- (id)initWithXMLDocument:(struct _xmlDoc *)arg1;
- (void)setXMLDocument:(struct _xmlDoc *)arg1;
- (void)strip;
- (void)processXMLDocument:(struct _xmlDoc *)arg1;
- (id)processXMLDocument:(struct _xmlDoc *)arg1 blockComments:(_Bool)arg2;
- (id)metaTagDescription;
- (id)metaTagKeywords;
- (id)metaTagsLabeled;
- (id)metaTagsUnlabeled;
- (id)scriptBlocks;
- (_Bool)hasFrameset;
- (_Bool)hasShortRefresh;
- (id)metaTagRating;

@end
