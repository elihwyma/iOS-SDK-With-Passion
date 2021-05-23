/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NTPBVanityURLMapping;

@interface FCVanityURLMapper : NSObject

{
    NTPBVanityURLMapping *_vanityURLMapping;
}

@property (copy, nonatomic, readonly) NTPBVanityURLMapping *vanityURLMapping;

- (id)init;
- (id)initWithVanityURLMapping:(id)arg1;
- (id)URLForVanityURL:(id)arg1;
- (id)_standardizedInputPathWithPath:(id)arg1;
- (id)_standardizedMappingPathWithPath:(id)arg1;
- (void)_standardizeResultPath:(id)arg1;
- (id)_pathWithTrailingForwardSlashWithPath:(id)arg1;

@end
