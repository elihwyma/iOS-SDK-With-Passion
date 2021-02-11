/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDDataCollectionAnonymizer : NSObject <NSCopying> {
    NSData * _salt;
}

@property (nonatomic, readonly, copy) NSData *salt;

- (void).cxx_destruct;
- (id)anonymizeArray:(id)arg1;
- (id)anonymizeDictionary:(id)arg1;
- (id)anonymizeObject:(id)arg1;
- (id)anonymizeString:(id)arg1 withSalt:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSalt:(id)arg1;
- (id)salt;

@end