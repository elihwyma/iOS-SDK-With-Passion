/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNotesMetadataResultSpec : FATObject

{
    NSNumber *_includeTitle;
    NSNumber *_includeContentLength;
    NSNumber *_includeCreated;
    NSNumber *_includeUpdated;
    NSNumber *_includeDeleted;
    NSNumber *_includeUpdateSequenceNum;
    NSNumber *_includeNotebookGuid;
    NSNumber *_includeTagGuids;
    NSNumber *_includeAttributes;
    NSNumber *_includeLargestResourceMime;
    NSNumber *_includeLargestResourceSize;
}

@property (retain, nonatomic) NSNumber *includeTitle;
@property (retain, nonatomic) NSNumber *includeContentLength;
@property (retain, nonatomic) NSNumber *includeCreated;
@property (retain, nonatomic) NSNumber *includeUpdated;
@property (retain, nonatomic) NSNumber *includeDeleted;
@property (retain, nonatomic) NSNumber *includeUpdateSequenceNum;
@property (retain, nonatomic) NSNumber *includeNotebookGuid;
@property (retain, nonatomic) NSNumber *includeTagGuids;
@property (retain, nonatomic) NSNumber *includeAttributes;
@property (retain, nonatomic) NSNumber *includeLargestResourceMime;
@property (retain, nonatomic) NSNumber *includeLargestResourceSize;

+ (id)structName;
+ (id)structFields;

@end
