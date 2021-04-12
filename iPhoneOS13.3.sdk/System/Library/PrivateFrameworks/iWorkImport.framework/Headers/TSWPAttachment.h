//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSDOwningAttachment-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSPCopying-Protocol.h>
#import <iWorkImport/TSWPStorageActionObjectProtocol-Protocol.h>

@class TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPAttachment : TSPObject <TSWPStorageActionObjectProtocol, TSKDocumentObject, TSDOwningAttachment, TSPCopying, TSKModel>
{
    TSWPStorage *_parentStorage;
}

+ (id)mostSpecificAttachmentFromInfo:(id)arg1;
+ (id)allocWithZone:(_NSZone )arg1;
+ (NSUInteger)attributeArrayKind;
@property(nonatomic) __weak TSWPStorage *parentStorage; // @synthesize parentStorage=_parentStorage;
// - (void).cxx_destruct;
- (BOOL)preserveAttributesOverSelectionWhenInserting;
- (BOOL)shouldInvalidateWhenTextPropertiesChange;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)invalidateSize;
- (void)infoChanged;
@property(readonly, nonatomic) BOOL specifiesEnabledKnobMask;
@property(readonly, nonatomic) BOOL isVerticallyCentered;
@property(readonly, nonatomic) BOOL isHorizontallyCentered;
@property(readonly, nonatomic) BOOL isSearchable;
@property(readonly, nonatomic) Class positionerClass;
@property(readonly, nonatomic) BOOL isAttachedToBodyText;
@property(readonly, nonatomic) BOOL isPartitioned;
@property(readonly, nonatomic) BOOL isAnchored;
@property(readonly, nonatomic) BOOL isDrawable;
- (void)performTemplateLocalization:(id)arg1;
- (id)objectsForStyleMigrating;
- (void)migrateStyleWithDocumentRoot:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (BOOL)supportsUUID;
- (NSUInteger)findCharIndex;
- (id)topLevelAttachment;
- (BOOL)changesWithPageCount;
- (int)elementKind;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (BOOL)changesWithPageNumber;

@end

