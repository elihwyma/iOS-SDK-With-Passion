/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface DOCEnumerationProperties : NSObject

{
    NSNumber *_maximumNumberOfItems;
    NSArray *_tagIdentifiers;
    NSArray *_excludedFileTypes;
    NSArray *_allowedFileTypes;
    NSString *_hostIdentifier;
}

@property (copy) NSNumber *maximumNumberOfItems;
@property (copy) NSArray *tagIdentifiers;
@property (copy) NSArray *excludedFileTypes;
@property (copy) NSArray *allowedFileTypes;
@property (copy) NSString *hostIdentifier;

- (id)initWithHostIdentifier:(id)arg1 maximumNumberOfItems:(long long)arg2 allowedDocumentTypes:(id)arg3 excludedDocumentTypes:(id)arg4 tags:(id)arg5;
- (id)initWithConfiguration:(id)arg1 tags:(id)arg2;

@end
