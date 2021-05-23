/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSData, NSError, NSString;

@protocol OCDReaderDelegate, TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface OCDReader : NSObject

{
    id <TCCancelDelegate> mCancelDelegate;
    _Bool mIsThumbnail;
    NSString *mFileName;
    NSData *mData;
    NSError *mStartError;
    id <OCDReaderDelegate> _delegate;
}

@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSError *startError;
@property (retain, nonatomic) id <TCCancelDelegate> cancelDelegate;
@property (weak, nonatomic) id <OCDReaderDelegate> delegate;
@property (nonatomic) _Bool isThumbnail;

- (_Bool)start;
- (id)read;
- (id)initWithCancelDelegate:(id)arg1;
- (_Bool)isBinaryReader;
- (_Bool)verifyFileFormat;
- (void)setStartErrorMessageFromException:(id)arg1;

@end
