/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CRKOPFPackageContents : NSObject

{
    NSString *_bookIdentifier;
    NSString *_bookIdentifierType;
    NSString *_title;
    NSString *_author;
    NSString *_coverImagePath;
    NSString *_tableOfContentsFilePath;
    NSString *_tableOfContentsMediaType;
    NSMutableArray *_spineItemIdentifiers;
    NSMutableDictionary *_itemPathsByIdentifier;
}

@property (copy, nonatomic) NSString *bookIdentifier;
@property (copy, nonatomic) NSString *bookIdentifierType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *coverImagePath;
@property (copy, nonatomic) NSString *tableOfContentsFilePath;
@property (copy, nonatomic) NSString *tableOfContentsMediaType;
@property (nonatomic, readonly) NSMutableArray *spineItemIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *itemPathsByIdentifier;

- (id)cfiWithItemIdentifier:(id)arg1 fragment:(id)arg2;
- (id)initWithIdentifierType:(id)arg1 identifier:(id)arg2;
- (id)itemIdentifierForHref:(id)arg1 fragment:(id *)arg2;
- (id)urlWithItemIdentifier:(id)arg1 fragment:(id)arg2;

@end
