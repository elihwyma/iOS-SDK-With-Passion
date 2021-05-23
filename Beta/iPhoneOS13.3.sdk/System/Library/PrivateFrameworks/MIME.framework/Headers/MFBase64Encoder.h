/*
 Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFBase64Encoder

{
    const char *_table;
    unsigned long long _left;
    unsigned char _leftovers[3];
    unsigned long long _line;
    unsigned long long _lineBreak;
    BOOL _padChar;
}

@property (nonatomic) unsigned long long lineBreak;
@property (nonatomic) _Bool allowSlash;
@property (nonatomic) BOOL padChar;

- (long long)appendData:(id)arg1;
- (void)done;
- (void)setStandardLineBreak;
- (id)initWithConsumers:(id)arg1;

@end
