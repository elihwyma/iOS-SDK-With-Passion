/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSString;

@interface CNVCardDataStorage : NSObject

{
    NSMutableData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)storageWithData:(id)arg1;

- (void)appendString:(id)arg1;
- (void)appendFormat:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)appendData:(id)arg1;
- (unsigned long long)estimatedDataLength;
- (unsigned long long)currentLength;
- (id)insertionMarker;
- (void)insertString:(id)arg1 atMarker:(id)arg2;
- (void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;

@end
