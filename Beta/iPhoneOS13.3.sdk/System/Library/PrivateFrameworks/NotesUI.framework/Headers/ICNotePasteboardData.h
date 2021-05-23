/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICDataPersister, NSData;

@interface ICNotePasteboardData : NSObject

{
    NSData *_attributedStringData;
    ICDataPersister *_dataPersister;
}

@property (nonatomic, readonly) NSData *attributedStringData;
@property (nonatomic, readonly) ICDataPersister *dataPersister;

+ (_Bool)supportsSecureCoding;
+ (id)pasteboardDataFromPersistenceData:(id)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttributedStringData:(id)arg1 dataPersister:(id)arg2;
- (id)persistenceData;

@end
