/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCXReader.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EXReader : OCXReader

{
    NSString *mTemporaryDirectory;
}

@property (retain, nonatomic) NSString *temporaryDirectory;

- (id)read;
- (id)defaultPassphrase;

@end
