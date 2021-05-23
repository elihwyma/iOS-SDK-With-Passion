/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class EXReadState, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EXSheetContext : NSObject <Swift>

{
    EXReadState *mSheetState;
    NSURL *mPackageLocation;
    NSString *mType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)loadDelayedNode:(id)arg1;
- (id)initWithSheetLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3;

@end
