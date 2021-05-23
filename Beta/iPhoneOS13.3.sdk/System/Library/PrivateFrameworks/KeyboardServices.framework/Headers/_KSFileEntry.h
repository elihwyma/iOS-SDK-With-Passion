/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface _KSFileEntry : NSObject

{
    NSString *_name;
    NSMutableDictionary *_extendedAttributes;
    NSMutableArray *_tempFiles;
    NSMutableArray *_fileArray;
    NSData *_fileBlob;
}

@property (retain, nonatomic, readonly) NSString *name;
@property (retain, nonatomic, readonly) NSMutableDictionary *extendedAttributes;

+ (_Bool)supportsSecureCoding;
+ (id)entryWithSerialisedDataAtURL:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)consistencyCheck;
- (void)restoreToPath:(id)arg1;
- (void)performOnEverything:(CDUnknownBlockType)arg1;
- (id)temporaryFileNameForType:(id)arg1;
- (id)serialiseToTemporaryFile;
- (unsigned long long)addBlobToFile:(id)arg1;
- (void)loadAttributesFromURL:(id)arg1;
- (void)saveAttributesToURL:(id)arg1;

@end
