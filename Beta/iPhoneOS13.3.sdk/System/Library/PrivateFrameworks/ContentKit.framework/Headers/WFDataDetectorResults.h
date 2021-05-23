/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, WFFileType;

@interface WFDataDetectorResults : NSObject

{
    NSArray *_textCheckingResults;
    NSNumber *_number;
    NSArray *_dictionaries;
    WFFileType *_dictionaryType;
}

@property (nonatomic, readonly) NSArray *textCheckingResults;
@property (nonatomic, readonly) NSArray *URLs;
@property (nonatomic, readonly) NSArray *streetAddresses;
@property (nonatomic, readonly) NSArray *phoneNumbers;
@property (nonatomic, readonly) NSArray *dates;
@property (nonatomic, readonly) NSNumber *number;
@property (nonatomic, readonly) NSArray *dictionaries;
@property (nonatomic, readonly) WFFileType *dictionaryType;

- (id)init;
- (id)initWithTextCheckingResults:(id)arg1 number:(id)arg2 dictionaries:(id)arg3 dictionaryType:(id)arg4;

@end
